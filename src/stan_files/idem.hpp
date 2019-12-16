/*
    Test is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Test is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Test.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.19.1

#include <stan/model/model_header.hpp>

namespace model_idem_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_idem");
    reader.add_event(103, 101, "end", "model_idem");
    return reader;
}

template <typename T0__, typename T1__, typename T2__>
typename boost::math::tools::promote_args<T0__, T1__, T2__>::type
klpdf(const T0__& err,
          const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& res,
          const T2__& h,
          const int& n, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 6;
        local_scalar_t__ tmp(DUMMY_VAR__);
        (void) tmp;  // dummy to suppress unused var warning
        stan::math::initialize(tmp, DUMMY_VAR__);
        stan::math::fill(tmp, DUMMY_VAR__);

        current_statement_begin__ = 7;
        local_scalar_t__ rst(DUMMY_VAR__);
        (void) rst;  // dummy to suppress unused var warning
        stan::math::initialize(rst, DUMMY_VAR__);
        stan::math::fill(rst, DUMMY_VAR__);


        current_statement_begin__ = 9;
        stan::math::assign(rst, 0);
        current_statement_begin__ = 10;
        for (int i = 1; i <= n; ++i) {

            current_statement_begin__ = 11;
            stan::math::assign(tmp, ((get_base1(res, i, "res", 1) - err) / h));
            current_statement_begin__ = 12;
            stan::math::assign(tmp, pow((tmp / 2), 2));
            current_statement_begin__ = 13;
            stan::math::assign(rst, (rst + stan::math::exp(-(tmp))));
        }
        current_statement_begin__ = 16;
        stan::math::assign(rst, stan::math::log(((rst / n) / h)));
        current_statement_begin__ = 18;
        return stan::math::promote_scalar<fun_return_scalar_t__>(rst);
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}


struct klpdf_functor__ {
    template <typename T0__, typename T1__, typename T2__>
        typename boost::math::tools::promote_args<T0__, T1__, T2__>::type
    operator()(const T0__& err,
          const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& res,
          const T2__& h,
          const int& n, std::ostream* pstream__) const {
        return klpdf(err, res, h, n, pstream__);
    }
};

template <bool propto, typename T0__, typename T1__, typename T2__, typename T4__, typename T5__, typename T10__, typename T11__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T4__, typename boost::math::tools::promote_args<T5__, T10__, T11__>::type>::type
cond_lpdf(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& ymis,
              const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& yobs,
              const Eigen::Matrix<T2__, Eigen::Dynamic, Eigen::Dynamic>& coef,
              const int& ny,
              const std::vector<T4__>& mu,
              const std::vector<T5__>& sigma,
              const std::vector<int>& imis,
              const std::vector<int>& inx,
              const int& assumenormal,
              const int& nres,
              const Eigen::Matrix<T10__, Eigen::Dynamic, Eigen::Dynamic>& residual,
              const std::vector<T11__>& h, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T4__, typename boost::math::tools::promote_args<T5__, T10__, T11__>::type>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 24;
        local_scalar_t__ rst(DUMMY_VAR__);
        (void) rst;  // dummy to suppress unused var warning
        stan::math::initialize(rst, DUMMY_VAR__);
        stan::math::fill(rst, DUMMY_VAR__);

        current_statement_begin__ = 25;
        local_scalar_t__ cmu(DUMMY_VAR__);
        (void) cmu;  // dummy to suppress unused var warning
        stan::math::initialize(cmu, DUMMY_VAR__);
        stan::math::fill(cmu, DUMMY_VAR__);

        current_statement_begin__ = 26;
        local_scalar_t__ csigma(DUMMY_VAR__);
        (void) csigma;  // dummy to suppress unused var warning
        stan::math::initialize(csigma, DUMMY_VAR__);
        stan::math::fill(csigma, DUMMY_VAR__);

        current_statement_begin__ = 27;
        validate_non_negative_index("ally", "ny", ny);
        Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> ally(ny);
        stan::math::initialize(ally, DUMMY_VAR__);
        stan::math::fill(ally, DUMMY_VAR__);


        current_statement_begin__ = 30;
        for (int i = 1; i <= ny; ++i) {

            current_statement_begin__ = 31;
            if (as_bool(logical_eq(1, get_base1(imis, i, "imis", 1)))) {

                current_statement_begin__ = 33;
                stan::model::assign(ally, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            get_base1(ymis, get_base1(inx, i, "inx", 1), "ymis", 1), 
                            "assigning variable ally");
            } else {

                current_statement_begin__ = 36;
                stan::model::assign(ally, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            get_base1(yobs, get_base1(inx, i, "inx", 1), "yobs", 1), 
                            "assigning variable ally");
            }
        }
        current_statement_begin__ = 40;
        stan::math::assign(rst, 0);
        current_statement_begin__ = 41;
        for (int i = 1; i <= ny; ++i) {

            current_statement_begin__ = 42;
            stan::math::assign(csigma, get_base1(sigma, i, "sigma", 1));
            current_statement_begin__ = 43;
            stan::math::assign(cmu, get_base1(mu, i, "mu", 1));
            current_statement_begin__ = 45;
            if (as_bool(logical_lt(1, i))) {

                current_statement_begin__ = 46;
                stan::math::assign(cmu, (cmu + (get_base1(coef, i, 3, "coef", 1) * get_base1(ally, (i - 1), "ally", 1))));
            }
            current_statement_begin__ = 50;
            if (as_bool(logical_eq(1, assumenormal))) {

                current_statement_begin__ = 51;
                stan::math::assign(rst, (rst + normal_log(get_base1(ally, i, "ally", 1), cmu, csigma)));
            } else {

                current_statement_begin__ = 53;
                stan::math::assign(rst, (rst + klpdf((get_base1(ally, i, "ally", 1) - cmu), stan::model::rvalue(residual, stan::model::cons_list(stan::model::index_omni(), stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list())), "residual"), get_base1(h, i, "h", 1), nres, pstream__)));
            }
        }
        current_statement_begin__ = 56;
        return stan::math::promote_scalar<fun_return_scalar_t__>(rst);
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}
template <typename T0__, typename T1__, typename T2__, typename T4__, typename T5__, typename T10__, typename T11__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T4__, typename boost::math::tools::promote_args<T5__, T10__, T11__>::type>::type
cond_lpdf(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& ymis,
              const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& yobs,
              const Eigen::Matrix<T2__, Eigen::Dynamic, Eigen::Dynamic>& coef,
              const int& ny,
              const std::vector<T4__>& mu,
              const std::vector<T5__>& sigma,
              const std::vector<int>& imis,
              const std::vector<int>& inx,
              const int& assumenormal,
              const int& nres,
              const Eigen::Matrix<T10__, Eigen::Dynamic, Eigen::Dynamic>& residual,
              const std::vector<T11__>& h, std::ostream* pstream__) {
    return cond_lpdf<false>(ymis,yobs,coef,ny,mu,sigma,imis,inx,assumenormal,nres,residual,h, pstream__);
}


struct cond_lpdf_functor__ {
    template <bool propto, typename T0__, typename T1__, typename T2__, typename T4__, typename T5__, typename T10__, typename T11__>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T4__, typename boost::math::tools::promote_args<T5__, T10__, T11__>::type>::type
    operator()(const Eigen::Matrix<T0__, Eigen::Dynamic, 1>& ymis,
              const Eigen::Matrix<T1__, Eigen::Dynamic, 1>& yobs,
              const Eigen::Matrix<T2__, Eigen::Dynamic, Eigen::Dynamic>& coef,
              const int& ny,
              const std::vector<T4__>& mu,
              const std::vector<T5__>& sigma,
              const std::vector<int>& imis,
              const std::vector<int>& inx,
              const int& assumenormal,
              const int& nres,
              const Eigen::Matrix<T10__, Eigen::Dynamic, Eigen::Dynamic>& residual,
              const std::vector<T11__>& h, std::ostream* pstream__) const {
        return cond_lpdf(ymis, yobs, coef, ny, mu, sigma, imis, inx, assumenormal, nres, residual, h, pstream__);
    }
};

#include <meta_header.hpp>
 class model_idem : public prob_grad {
private:
        int NY;
        int NOBS;
        vector_d YOBS;
        int NX;
        vector_d X;
        matrix_d COEF;
        std::vector<int> IMIS;
        std::vector<int> INX;
        int ASSUMENORMAL;
        int NRES;
        matrix_d RESIDUAL;
        std::vector<double> H;
        int NMIS;
        std::vector<double> MU;
        std::vector<double> SIGMA;
public:
    model_idem(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    model_idem(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "model_idem_namespace::model_idem";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {
            // initialize data block variables from context__
            current_statement_begin__ = 61;
            context__.validate_dims("data initialization", "NY", "int", context__.to_vec());
            NY = int(0);
            vals_i__ = context__.vals_i("NY");
            pos__ = 0;
            NY = vals_i__[pos__++];
            check_greater_or_equal(function__, "NY", NY, 1);

            current_statement_begin__ = 62;
            context__.validate_dims("data initialization", "NOBS", "int", context__.to_vec());
            NOBS = int(0);
            vals_i__ = context__.vals_i("NOBS");
            pos__ = 0;
            NOBS = vals_i__[pos__++];
            check_greater_or_equal(function__, "NOBS", NOBS, 0);

            current_statement_begin__ = 63;
            validate_non_negative_index("YOBS", "(NOBS + 1)", (NOBS + 1));
            context__.validate_dims("data initialization", "YOBS", "vector_d", context__.to_vec((NOBS + 1)));
            YOBS = Eigen::Matrix<double, Eigen::Dynamic, 1>((NOBS + 1));
            vals_r__ = context__.vals_r("YOBS");
            pos__ = 0;
            size_t YOBS_j_1_max__ = (NOBS + 1);
            for (size_t j_1__ = 0; j_1__ < YOBS_j_1_max__; ++j_1__) {
                YOBS(j_1__) = vals_r__[pos__++];
            }

            current_statement_begin__ = 64;
            context__.validate_dims("data initialization", "NX", "int", context__.to_vec());
            NX = int(0);
            vals_i__ = context__.vals_i("NX");
            pos__ = 0;
            NX = vals_i__[pos__++];
            check_greater_or_equal(function__, "NX", NX, 1);

            current_statement_begin__ = 65;
            validate_non_negative_index("X", "NX", NX);
            context__.validate_dims("data initialization", "X", "vector_d", context__.to_vec(NX));
            X = Eigen::Matrix<double, Eigen::Dynamic, 1>(NX);
            vals_r__ = context__.vals_r("X");
            pos__ = 0;
            size_t X_j_1_max__ = NX;
            for (size_t j_1__ = 0; j_1__ < X_j_1_max__; ++j_1__) {
                X(j_1__) = vals_r__[pos__++];
            }

            current_statement_begin__ = 66;
            validate_non_negative_index("COEF", "NY", NY);
            validate_non_negative_index("COEF", "(NX + 3)", (NX + 3));
            context__.validate_dims("data initialization", "COEF", "matrix_d", context__.to_vec(NY,(NX + 3)));
            COEF = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>(NY, (NX + 3));
            vals_r__ = context__.vals_r("COEF");
            pos__ = 0;
            size_t COEF_j_2_max__ = (NX + 3);
            size_t COEF_j_1_max__ = NY;
            for (size_t j_2__ = 0; j_2__ < COEF_j_2_max__; ++j_2__) {
                for (size_t j_1__ = 0; j_1__ < COEF_j_1_max__; ++j_1__) {
                    COEF(j_1__, j_2__) = vals_r__[pos__++];
                }
            }

            current_statement_begin__ = 68;
            validate_non_negative_index("IMIS", "NY", NY);
            context__.validate_dims("data initialization", "IMIS", "int", context__.to_vec(NY));
            IMIS = std::vector<int>(NY, int(0));
            vals_i__ = context__.vals_i("IMIS");
            pos__ = 0;
            size_t IMIS_k_0_max__ = NY;
            for (size_t k_0__ = 0; k_0__ < IMIS_k_0_max__; ++k_0__) {
                IMIS[k_0__] = vals_i__[pos__++];
            }
            size_t IMIS_i_0_max__ = NY;
            for (size_t i_0__ = 0; i_0__ < IMIS_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "IMIS[i_0__]", IMIS[i_0__], 0);
                check_less_or_equal(function__, "IMIS[i_0__]", IMIS[i_0__], 1);
            }

            current_statement_begin__ = 69;
            validate_non_negative_index("INX", "NY", NY);
            context__.validate_dims("data initialization", "INX", "int", context__.to_vec(NY));
            INX = std::vector<int>(NY, int(0));
            vals_i__ = context__.vals_i("INX");
            pos__ = 0;
            size_t INX_k_0_max__ = NY;
            for (size_t k_0__ = 0; k_0__ < INX_k_0_max__; ++k_0__) {
                INX[k_0__] = vals_i__[pos__++];
            }
            size_t INX_i_0_max__ = NY;
            for (size_t i_0__ = 0; i_0__ < INX_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "INX[i_0__]", INX[i_0__], 1);
            }

            current_statement_begin__ = 72;
            context__.validate_dims("data initialization", "ASSUMENORMAL", "int", context__.to_vec());
            ASSUMENORMAL = int(0);
            vals_i__ = context__.vals_i("ASSUMENORMAL");
            pos__ = 0;
            ASSUMENORMAL = vals_i__[pos__++];
            check_greater_or_equal(function__, "ASSUMENORMAL", ASSUMENORMAL, 0);
            check_less_or_equal(function__, "ASSUMENORMAL", ASSUMENORMAL, 1);

            current_statement_begin__ = 73;
            context__.validate_dims("data initialization", "NRES", "int", context__.to_vec());
            NRES = int(0);
            vals_i__ = context__.vals_i("NRES");
            pos__ = 0;
            NRES = vals_i__[pos__++];
            check_greater_or_equal(function__, "NRES", NRES, 1);

            current_statement_begin__ = 74;
            validate_non_negative_index("RESIDUAL", "NRES", NRES);
            validate_non_negative_index("RESIDUAL", "NY", NY);
            context__.validate_dims("data initialization", "RESIDUAL", "matrix_d", context__.to_vec(NRES,NY));
            RESIDUAL = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>(NRES, NY);
            vals_r__ = context__.vals_r("RESIDUAL");
            pos__ = 0;
            size_t RESIDUAL_j_2_max__ = NY;
            size_t RESIDUAL_j_1_max__ = NRES;
            for (size_t j_2__ = 0; j_2__ < RESIDUAL_j_2_max__; ++j_2__) {
                for (size_t j_1__ = 0; j_1__ < RESIDUAL_j_1_max__; ++j_1__) {
                    RESIDUAL(j_1__, j_2__) = vals_r__[pos__++];
                }
            }

            current_statement_begin__ = 75;
            validate_non_negative_index("H", "NY", NY);
            context__.validate_dims("data initialization", "H", "double", context__.to_vec(NY));
            H = std::vector<double>(NY, double(0));
            vals_r__ = context__.vals_r("H");
            pos__ = 0;
            size_t H_k_0_max__ = NY;
            for (size_t k_0__ = 0; k_0__ < H_k_0_max__; ++k_0__) {
                H[k_0__] = vals_r__[pos__++];
            }


            // initialize transformed data variables
            current_statement_begin__ = 79;
            NMIS = int(0);
            stan::math::fill(NMIS, std::numeric_limits<int>::min());

            current_statement_begin__ = 80;
            validate_non_negative_index("MU", "NY", NY);
            MU = std::vector<double>(NY, double(0));
            stan::math::fill(MU, DUMMY_VAR__);

            current_statement_begin__ = 81;
            validate_non_negative_index("SIGMA", "NY", NY);
            SIGMA = std::vector<double>(NY, double(0));
            stan::math::fill(SIGMA, DUMMY_VAR__);

            // execute transformed data statements
            current_statement_begin__ = 83;
            stan::math::assign(NMIS, (NY - NOBS));
            current_statement_begin__ = 84;
            for (int i = 1; i <= NY; ++i) {

                current_statement_begin__ = 85;
                stan::model::assign(SIGMA, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            get_base1(COEF, i, 1, "COEF", 1), 
                            "assigning variable SIGMA");
                current_statement_begin__ = 86;
                stan::model::assign(MU, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            get_base1(COEF, i, 2, "COEF", 1), 
                            "assigning variable MU");
                current_statement_begin__ = 88;
                for (int k = 1; k <= NX; ++k) {

                    current_statement_begin__ = 89;
                    stan::model::assign(MU, 
                                stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                                (get_base1(MU, i, "MU", 1) + (get_base1(X, k, "X", 1) * get_base1(COEF, i, (3 + k), "COEF", 1))), 
                                "assigning variable MU");
                }
            }

            // validate transformed data
            current_statement_begin__ = 79;
            check_greater_or_equal(function__, "NMIS", NMIS, 0);


            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 95;
            validate_non_negative_index("YMIS", "NMIS", NMIS);
            num_params_r__ += NMIS;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~model_idem() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        current_statement_begin__ = 95;
        if (!(context__.contains_r("YMIS")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable YMIS missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("YMIS");
        pos__ = 0U;
        validate_non_negative_index("YMIS", "NMIS", NMIS);
        context__.validate_dims("parameter initialization", "YMIS", "vector_d", context__.to_vec(NMIS));
        Eigen::Matrix<double, Eigen::Dynamic, 1> YMIS(NMIS);
        size_t YMIS_j_1_max__ = NMIS;
        for (size_t j_1__ = 0; j_1__ < YMIS_j_1_max__; ++j_1__) {
            YMIS(j_1__) = vals_r__[pos__++];
        }
        try {
            writer__.vector_unconstrain(YMIS);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable YMIS: ") + e.what()), current_statement_begin__, prog_reader__());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);

            // model parameters
            current_statement_begin__ = 95;
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> YMIS;
            (void) YMIS;  // dummy to suppress unused var warning
            if (jacobian__)
                YMIS = in__.vector_constrain(NMIS, lp__);
            else
                YMIS = in__.vector_constrain(NMIS);

            // model body

            current_statement_begin__ = 99;
            if (pstream__) {
                stan_print(pstream__,YMIS);
                *pstream__ << std::endl;
            }
            current_statement_begin__ = 100;
            lp_accum__.add(cond_lpdf<propto__>(YMIS, YOBS, COEF, NY, MU, SIGMA, IMIS, INX, ASSUMENORMAL, NRES, RESIDUAL, H, pstream__));

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("YMIS");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dims__.push_back(NMIS);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_idem_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning

        // read-transform, write parameters
        Eigen::Matrix<double, Eigen::Dynamic, 1> YMIS = in__.vector_constrain(NMIS);
        size_t YMIS_j_1_max__ = NMIS;
        for (size_t j_1__ = 0; j_1__ < YMIS_j_1_max__; ++j_1__) {
            vars__.push_back(YMIS(j_1__));
        }

        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        if (!include_tparams__ && !include_gqs__) return;

        try {
            if (!include_gqs__ && !include_tparams__) return;
            if (!include_gqs__) return;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "model_idem";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        size_t YMIS_j_1_max__ = NMIS;
        for (size_t j_1__ = 0; j_1__ < YMIS_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "YMIS" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }

        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        size_t YMIS_j_1_max__ = NMIS;
        for (size_t j_1__ = 0; j_1__ < YMIS_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "YMIS" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }

        if (!include_gqs__) return;
    }

}; // model

}  // namespace

typedef model_idem_namespace::model_idem stan_model;


#endif
